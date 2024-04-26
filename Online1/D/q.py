

tedad = int(input())
tartib = list(map(int, input().split()))
counter = 0
while counter < len(tartib):
    j = counter + 1
    while j < len(tartib):
        if tartib[counter] > tartib[j]:
            del tartib[j]
        else:
            break
    counter += 1

for x in tartib:
    print(x, end=" ")







