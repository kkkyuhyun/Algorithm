def func(lst):
    for i in range(len(lst)//2):
        lst[i],lst[i-1]=lst[-i-1],lst[i] #양쪽 끝 값을 swap 해준다고 생각하기 
        
lst=[1,2,3,4,5,6]
func(lst)
print(sum(lst[::2])-sum(lst[1::2]))
#짝수 인덱스 값들의 합(6+4+2) - 홀수 인덱스 값들의 합(1+3+5) = 3


#len(lst) = 6, len(lst)//2=3(정수만)

#len(lst) = 6, len(lst)//2=3(정수만)
#i=0일 때 lst[0] 과 lst[-1] 교환 lst=[6,2,3,4,5,1]
#i=1일 때 lst[1] 과 lst[-2] 교환 lst=[6,5,3,4,2,1]
#i=2일 때 lst[2] 과 lst[-3] 교환 lst=[6,5,4,3,2,1]
