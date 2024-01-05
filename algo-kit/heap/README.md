# 우선순위 큐

힙은 우선순위 큐로 구현한다.

1. header include
   include <queue>
2. 선언

- min heap: priority_queue <int, vector<int>, greater<int>>
- max heap: priority_queue <int, vector<int>, less<int>>
  2-1. 벡터를 우선순위 큐에 바로 넣을 때 뒤에 (v.begin(),v.end()) 이렇게 벡터의 양 끝 이터레이터 값을 넣어주면 바로 생성할 수 있음
  - ex) priority_queue<int,vector<int>, greater<int>>(v.begin(),v.end())

3. 메서드
   push_back()이 아니라 push()인 점, front()가 아니라 top()인 점을 유의하자.

- push() : 　 우선순위 큐에 원소를 추가한다
- pop() : 우선순위 큐에서 top의 원소를 제거한다
- top() : 우선순위 큐에서 top에 있는 원소 즉 우선순위가 높은 원소를 반환한다.
- empty() : 우선순위 큐가 비어있으면 true를 반환하고 그렇지 않으면 false를 반환한다
- size() : 우선순위 큐에 포함되어 있는 원소의 수를 반환한다

# 비교연산자 제작하기

- struct cmp {
  bool operator()(int a, int b) {
  return a > b;
  }
  };

priority_queue<int, vector<int>,cmp> pq;
