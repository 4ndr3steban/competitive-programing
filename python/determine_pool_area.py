def matrix_multiply(A, B):
    # Matrix multiplication function
    result = [[0] * len(B[0]) for _ in range(len(A))]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j]
    return result

def matrix_power(A, n):
    # Matrix exponentiation function
    if n == 1:
        return A
    elif n % 2 == 0:
        half_power = matrix_power(A, n // 2)
        return matrix_multiply(half_power, half_power)
    else:
        half_power = matrix_power(A, (n - 1) // 2)
        return matrix_multiply(matrix_multiply(half_power, half_power), A)

def nth_term(n):
    if n == 0:
        return 1
    if n == 1:
        return 2
    if n == 2:
        return 3
    
    transition_matrix = [[3, 2, 1],
                         [1, 0, 0],
                         [0, 1, 0]]
    constants_vector = [[3], [0], [0]]
    initial_state = [[3], [2], [1]]  # t(2) = 3, t(1) = 2, t(0) = 1

    # Calculate the nth power of the transition matrix
    result_matrix = matrix_power(transition_matrix, n - 2)

    # Multiply the result matrix by the initial state and add the constants vector
    nth_state = matrix_multiply(result_matrix, initial_state)
    
    # Compute the dot product of nth_state and constants_vector
    nth_term_value = sum(nth_state[i][0] * constants_vector[i][0] for i in range(len(nth_state)))

    return nth_term_value

# Example usage
n = 6
print(f"The {n}-th term of the sequence is: {nth_term(n)}")
