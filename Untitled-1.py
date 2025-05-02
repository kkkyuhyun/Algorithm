def fp(arr):
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i]+arr[j]==10:
                return(i,j)
    return -1

arr=[2,5,7,3,8]
print(f'조건에 맞는 것은 {fp(arr)}') #정답: (0,4)

#재귀함수
def rs(d):
    n = d["n"]
    memo = d["memo"]

    if n in memo:
        return memo[n]

    if n <= 1:
        return 1

    
    result = rs({"n": n - 3, "memo": memo}) + rs({"n": n - 1, "memo": memo})
    memo[n] = result
    return result

num = 7
memo_dict = {"n": num, "memo": {}}
print(f"결과: {rs(memo_dict)}")

def ispal(s):
    s=s.lower().replace(" ","") #공백 제거
    return s==s[::-1] #리스트의 step을 활용한 문자열 탐색

s = "A Santa at NASA"
print(ispal(s))
#리스트 컴프리헨션
def fd(arr):
    seen=set() #동작한 숫자 저장하는 집합(set함수)
    duplicates =set()#중복으로 등장한 숫자 저장
    for num in arr:
        if num in seen:#처음 등장하는 숫자는 seen에 저장
            duplicates.add(num)#최종적으로 duplicates를 리스트로 변환
        seen.add(num)
    return list(duplicates)

arr = [1,3,5,2,3,8,5]
print(fd(arr)) #따라서 최종 정답은 3,5'''

def find_median(arr):
    arr.sort()
    return arr[len(arr)//2]

arr=[12,3,5,7,19] #sort 쓰면 오름차순 정렬 3,5,7,12,19 
print(find_median(arr)) #arr에 median 값은 7
print(12/5) #2.4 

numbers = [1,2,3,4,5]

mapped = map(lambda x:x*2,numbers)
mapped_list = list(mapped) #map 함수 두개의 어떤 것을 주어졌을 때 서로 짝 지어주기 여기서는 list 요소와 함수를 하나씩 짝 짓는 개념
#정답:[2,4,6,8,10]
filtered = filter(lambda x:x%2==0, numbers)
filtered_list=list(filtered) #filter 함수 특정 조건에 맞는 데이터만 선택하고 싶을 때 사용한다. 
#정답:[2,4,6]"""

print("hello world")


