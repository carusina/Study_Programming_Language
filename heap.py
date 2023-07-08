class Heap:
	def __init__(self, *args):
		if len(args) != 0:
			self.__A = args[0] # 파라미터로 온 리스트
		else:
			self.__A = []

	# [알고리즘 8-2] 구현: 힙에 원소 삽입하기(재귀 알고리즘 버전)
	def insert(self, x):
		self.__A.append(x)
		self.__percolateUp(len(self.__A)-1)

	# 스며오르기
	def __percolateUp(self, i:int):
		parent = (i - 1) // 2
		if i > 0 and self.__A[i] > self.__A[parent]:
			self.__A[i], self.__A[parent] = self.__A[parent], self.__A[i]
			self.__percolateUp(parent)

	# [알고리즘 8-2] 구현: 힙에서 원소 삭제하기
	def deleteMax(self):
		# heap is in self.__A[0...len(self.__A)-1]
		if (not self.isEmpty()):
			max = self.__A[0]
			self.__A[0] = self.__A.pop() # *.pop(): 리스트의 끝원소 삭제 후 원소 리턴
			self.__percolateDown(0)
			return max
		else:
			return None

	# 스며내리기
	def __percolateDown(self, i:int):
		# Percolate down w/ self.__A[i] as the root
		child = 2 * i + 1  # left child
		right = 2 * i + 2  # right child
		if (child <= len(self.__A)-1):
			if (right <= len(self.__A)-1 and self.__A[child] < self.__A[right]):
				child = right  # index of larger child
			if self.__A[i] < self.__A[child]:
				self.__A[i], self.__A[child] = self.__A[child], self.__A[i]
				self.__percolateDown(child)

	# 힙의 최댓값
	def max(self):
		return self.__A[0]

	# 힙 만들기
	def buildHeap(self):
		for i in range((len(self.__A) - 2) // 2, -1, -1): # 왼,오른 서브트리 다 해줘야힘
			self.__percolateDown(i)

	# 힙이 비었는지 확인하기
	def isEmpty(self) -> bool:
		return len(self.__A) == 0

	# 힙 비우기
	def clear(self):
		self.__A = []

	# 힙 사이즈
	def size(self) -> int:
		return len(self.__A)

	# 힙 출력
	def printHeap(self):
		print(self.__A)


h1 = Heap([1, 11, 9, 2, 3])
h1.buildHeap()
h1.clear()
h1.insert(7)
h1.insert(5)
h1.insert(9)
h1.insert(4)
h1.insert(11)
h1.insert(19)
h1.insert(20)
h1.insert(21)
h1.insert(11)
h1.printHeap()
print(h1.deleteMax())
h1.printHeap()