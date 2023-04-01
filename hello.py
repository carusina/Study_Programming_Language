print("Hello World")

#조건문
a = 1; b = 1
if a == b :
    print("a == b")
else :
    print("a != b")

#딕셔너리
cloth = { "brand" : "Nike", "color" : "black", "size" : "Large", "price" : 45000 }
for i in cloth :
    print(i)
    print(cloth[i])

#리스트
car = ["K3", "K5", "K7", "K8", "K9"]
for i in car :
    print(i)

#함수
def puls(parameter1, parameter2) :
    print("a + b = ")
    return parameter1 + parameter2
print(puls(3, 4))

#클래스
class Car :
    color = ""
    speed = 0

    def upSpeed(self, value) : #self는 실제로 전달 받지 않으며 객체의 speed에 접근하기 위한 수단
        self.speed += value    #즉 upSpeed 함수는 value만 인자로 전달받고 객체의 speed에 접근
    
    def downSpeed(self, value) :
        self.speed -= value

myCar = Car()
myCar.color = "Red";    myCar.speed = 0
myCar.upSpeed(50);  myCar.downSpeed(10)

print("자동차의 색상은 %s이며 현재 속도는 %d입니다." %(myCar.color, myCar.speed))