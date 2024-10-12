def min_bags_needed(N, K, M):
    
    capacity_per_bag = K * M
    
    bags_needed = (N + capacity_per_bag - 1) // capacity_per_bag  
    
    return bags_needed

N = 100  
K = 5   
M = 10  

result = min_bags_needed(N, K, M)
print("Minimum number of bags needed:", result)


    
