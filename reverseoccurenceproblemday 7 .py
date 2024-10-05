


def string_function(haystack,needle):
    if not needle:
        return 0
    
    for_index =(haystack.find(needle))
    return for_index

haystack = "haystack"
needle = "needle"

print(string_function(haystack,needle))

haystack = "haystac"
needle = "h"
print(string_function(haystack,needle))