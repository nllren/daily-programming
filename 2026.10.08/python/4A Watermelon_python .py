#4A Арбуз. Решение задания https://codeforces.com/problemset/problem/4/A на Python подсчет веса арбуза.
#  Если вес арбуза больше 2 кг и является четным числом, то можно разрезать его на две части с четным весом.

w = int(input())

if w > 2 and w % 2 == 0:
    print("YES")
else:
    print("NO")
