par = lambda x: x % 2 == 0

print(par(2))
print(par(3))

ptc = lambda num: num ** 2
print(int(ptc(int(input("Digite um numero: ")))))

txt = lambda s: s[0:12]
print(txt("Soco na cara"))

rvrs = lambda s: s[::-1]
print(rvrs("Soco na cara"))

addNum = lambda num1, num2: num1 + num2
print(addNum(4, 5))