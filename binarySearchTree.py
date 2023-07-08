class TreeNode:
    def __init__(self, newItem, left, right):
        self.item = newItem
        self.left = left
        self.right = right

class BinarySearchTree:
    def __init__(self) -> TreeNode:
        self.__root = None

    # [알고리즘 10-1] 구현: 검색
    def search(self, x) -> TreeNode:
        return self.__searchItem(self.__root, x)

    def __searchItem(self, tNode:TreeNode, x) -> TreeNode:
        if (tNode == None):
            return None
        elif (x == tNode.item):
            return tNode
        elif (x < tNode.item):
            return self.__searchItem(tNode.left, x)
        else:
            return self.__searchItem(tNode.right, x)

    # [알고리즘 10-3] 구현: 삽입
    def insert(self, newItem):
        self.__root = self.__insertItem(self.__root, newItem)

    def __insertItem(self, tNode:TreeNode, newItem) -> TreeNode:
        if (tNode == None):
            tNode = TreeNode(newItem, None, None)
        elif (newItem < tNode.item):
            tNode.left = self.__insertItem(tNode.left, newItem)
        else:
            tNode.right = self.__insertItem(tNode.right, newItem)
        return tNode

    # [알고리즘 10-7] 구현: 삭제
    def delete(self, x):
        self.__root = self.__deleteItem(self.__root, x)

    def __deleteItem(self, tNode:TreeNode, x) -> TreeNode:
        if (tNode == None):
            return None
        elif (x == tNode.item):
            tNode = self.__deleteNode(tNode)
        elif (x < tNode.item):
            tNode.left = self.__deleteItem(tNode.left, x)
        else:
            tNode.right = self.__deleteItem(tNode.right, x)
        return tNode
    
    def __deleteNode(self, tNode:TreeNode) -> TreeNode:
        # case1: tNode가 리프 노드
        if (tNode.left == None and tNode.right == None):
            return None
        # case2: tNode의 자식이 하나일 경우
        elif (tNode.left == None):
            return tNode.right
        elif (tNode.right == None):
            return tNode.left
        # case3: tNode의 자식이 둘일 경우 (우서브 트리에서 가장 작은 item)
        else:
            (rtnItem, rtnNode) = self.__deleteMinItem(tNode.right)
            tNode.item = rtnItem
            tNode.right = rtnNode
            return tNode
    
    def __deleteMinItem(self, tNode:TreeNode) -> tuple:
        if (tNode.left == None):
            return (tNode.item, tNode.right)
        else: # 오른자식을 왼자식으로 만드는 작업까지 같이
            (rtnItem, rtnNode) = self.__deleteMinItem(tNode.left)
            tNode.left = rtnNode
            return (rtnItem, tNode)
        
    # 기타
    def isEmpty(self) -> bool:
        return self.root == None
    
    def clear(self):
        self.__root = None

    # 전위순회
    def pre_order_traverse(self):
        self.__pre_order_traverse(self.__root)

    def __pre_order_traverse(self, tNode:TreeNode):
        if (tNode != None):
            print(tNode.item, end = ' ')
            self.__pre_order_traverse(tNode.left)
            self.__pre_order_traverse(tNode.right)

    # 중위순회
    def in_order_traverse(self):
        self.__in_order_traverse(self.__root)
    
    def __in_order_traverse(self, tNode:TreeNode):
        if (tNode != None):
            self.__in_order_traverse(tNode.left)
            print(tNode.item, end = ' ')
            self.__in_order_traverse(tNode.right)
    
    # 후위순회
    def post_order_traverse(self):
        self.__post_order_traverse(self.__root)

    def __post_order_traverse(self, tNode:TreeNode):
        if (tNode != None):
            self.__post_order_traverse(tNode.left)
            self.__post_order_traverse(tNode.right)
            print(tNode.item, end = ' ')

bst1 = BinarySearchTree()
bst1.insert(55)
bst1.insert(15)
bst1.insert(60)
bst1.insert(8)
bst1.insert(28)
bst1.insert(90)
bst1.insert(3)
bst1.insert(18)
bst1.insert(45)
bst1.insert(41)
bst1.insert(48)
bst1.insert(30)
bst1.insert(50)
bst1.insert(38)
bst1.insert(33)
bst1.insert(32)
bst1.insert(36)
print()
print("전위 순회")
bst1.pre_order_traverse()       # 결과를 도식화 할 것
print()

bst1.delete(28)
print()
print("중위 순회")
bst1.in_order_traverse()         # 결과를 도식화 할 것
print()

bst1.delete(30)

print("후위순회")
bst1.post_order_traverse()    # 결과를 도식화 할 것
print()
print()