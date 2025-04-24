count = 0
bonatchi = [1, 1]
index = 0

while count < 60:
    if count != 0 and count != 1:
        bonatchi.append(bonatchi[count - 1] + bonatchi[count - 2])
    count += 1

for n in bonatchi:
    if index != 0 and index != 1:
        print(f"{bonatchi[index - 2]} + {bonatchi[index - 1]} = {bonatchi[index]}")
    index += 1