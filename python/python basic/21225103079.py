n = int(input("Enter the number of processes: "))
pr = []

print("Enter the CPU times:")
for _ in range(n):
    cpu_time = int(input())
    pr.append((cpu_time, 0))

print("Enter the arrival times:")
for i in range(n):
    arrival_time = int(input())
    pr[i] = (pr[i][0], arrival_time)

pr.sort()

waiting_time = 0
turnaround_time = 0
total_time = 0

for i in range(n):
    if i + 1 < n and waiting_time < pr[i][0]:
        pr[i], pr[i+1] = pr[i+1], pr[i]
    
    print("Waiting time:", waiting_time - pr[i][1], "Turnaround time:", waiting_time + pr[i][0] - pr[i][1])
    turnaround_time += waiting_time + pr[i][0] - pr[i][1]
    total_time += waiting_time - pr[i][1]
    waiting_time += pr[i][0]

print("Average waiting time:", total_time / n)
print("Average turnaround time:", turnaround_time / n)
