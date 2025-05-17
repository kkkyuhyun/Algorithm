def func(value): 
    if type(value) == type(100):  # 정수와 같은지 확인
        return 100
    elif type(value) == type(""):  # 문자열과 같은지 확인
        return len(value)  # 문자열의 길이를 반환 11111 5
    else:  # 숫자(실수)나 튜플 등 다른 타입에 대해 20을 반환
        return 20 

# 변수 정의는 함수 외부에 있어야 함
a = '100.0'  # 문자열
b = 100.0  # 실수
c = (100, 200)  # 튜플

# 함수 호출 후 출력, 따라서 5+20+20
print(func(a) + func(b) + func(c))
