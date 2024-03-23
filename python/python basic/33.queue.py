from collections import deque

bank = deque(["Anis","Rahim","Shimul"])
bank.popleft()
print(bank)
bank.popleft()
bank.popleft()

if not bank:
    print("No person left")