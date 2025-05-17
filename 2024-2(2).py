def split_k(input_str,k):
  split_result=input_str.split('T')

  return split_result[k]

input_str ="ITISTESTSTRING"
k=3

result = split_k(input_str,k)
print(result)

//I[0]/T/IS[1]/T/ES[2]/T/S[3]/T/RING

