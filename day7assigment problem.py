def can_complete_assignments(T, start_times):
    results = []
    for X in start_times:
        if X + 3 <= 22:  # 10 pm is 22 in 24-hour format of clock 
            results.append("Yes")
        else:
            results.append("No")
    return results

T = int(input("Enter the number of test cases: "))
start_times = []
for _ in range(T):
    start_times.append(int(input("Enter the start time: ")))

results = can_complete_assignments(T, start_times)
for result in results:
    print(result)

