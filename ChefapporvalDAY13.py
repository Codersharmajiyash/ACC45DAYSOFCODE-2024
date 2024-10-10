def is_expert(X, Y):
    
    if Y >= X / 2:
        return "Munchy is an expert."
    else:
        return "Munchy is not an expert."

# Example usage
X = int(input("Enter the number of problems submitted (X): "))
Y = int(input("Enter the number of problems approved (Y): "))

result = is_expert(X, Y)
print(result)


    