a = ["Seoul", "Kyeonggi", "Incheon", "Daejeon", "Daegu", "Pusan"]
str = "S"
for city in a:
    str = str + city[1]  # 각 도시 이름에서 두 번째 문자를 추가
    print(str)
