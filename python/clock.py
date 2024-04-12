t = int(input())

for _ in range(t):

    h, m = map(int, input().split(":"))

    if 1 <= h <= 9 and m >= 10:
        print(f"0{h}:{m} AM")
    if 1 <= h <= 9 and m < 10:
        print(f"0{h}:0{m} AM")

    elif 10 <= h <= 11 and m >= 10:
        print(f"{h}:{m} AM")
    elif 10 <= h <= 11 and m < 10:
        print(f"{h}:0{m} AM")

    elif h == 12 and m >= 10:
        print(f"{h}:{m} PM")
    elif h == 12 and m < 10:
        print(f"{h}:0{m} PM")
    
    elif 13 <= h <= 21 and m >= 10:
        print(f"0{(h-2)%10}:{m} PM")
    elif 13 <= h <= 21 and m < 10:
        print(f"0{(h-2)%10}:0{m} PM")
    
    elif h == 22 and m >= 10:
        print(f"10:{m} PM")
    elif h == 22 and m < 10:
        print(f"10:0{m} PM")

    elif h == 23 and m >= 10:
        print(f"11:{m} PM")
    elif h == 23 and m < 10:
        print(f"11:0{m} PM")
    
    elif h == 0 and m >= 10:
        print(f"12:{m} AM")
    elif h == 0 and m < 10:
        print(f"12:0{m} AM")