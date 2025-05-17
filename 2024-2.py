def cnt(string, pattern):
    result = 0
    for i in range(len(string) - len(pattern) + 1):
      #string을 순회하면서 pattern과 일치하는 부분 문자열을 찾아내기 위한 반복문
      #range(len(string) - len(pattern) +1)는 len(string)문자열 길이를 나타내고, len(pattern)은 패턴 문자열 길이를 나타낸다. 
      #len(string) = abdcabcabca 11 , len(pattern)이 "ca"라면 2 (11-2+1) = 10 따라서 인덱스 0부터 9까지 확인 가능 
        sub = string[i:i + len(pattern)]
      #string[i:i+len(pattern)]은 string의 부분 문자열을 추출하는 코드. i=0이라면 string[0:2]는 ab, i=1이라면 string[1:3]은 bd 이런식으로 나아간다.
        if sub == pattern:
            result += 1
    return result

string = "abdcabcabca"
p1 = "ca"
p2 = "ab"

print(f'ca: {cnt(string, p1)} ab: {cnt(string, p2)}')

#함수 cnt를 호출해서 string에서 p1("ca")가 몇 번 등장하는지 계산한다. "ca"는 3번 등장해서 cnt(string,p1) =3
#함수 cnt를 호출해서 string에서 p2("ab")가 몇 번 등장하는지 계산한다. "ab"가 3번 등장해서 cnt(string,p2) =3
