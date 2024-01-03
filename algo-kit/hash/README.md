# 시퀀스 컨테이너 - vector, list

- 인덱스로 접근이 가능하다.

# 연관 컨테이너 - map, set

- key & value 구조로 값을 저장함
- 정렬되어 있음 -> 계속 정렬함 (이분 탐색으로 끼워 넣음)

### set

- key 로 자료형 선언
- value : boolean 값

### map

- key & value 구조로 자료형 선언
- map 원소에 접근하는 법
  - map[key] : 존재하지 않을 경우 value의 default 값으로 생성
  - map.at(key) : 존재하지 않을 경우 out_of_range 에러 발생
- 순회 방법
  - map<string,int> table;
    for(map<string,int>::iterator iter = table.begin();iter!=table.end();iter++){
    if(iter->second == 1){answer = iter->first; break;}
    }

### set vs map

### 해싱이 무엇인가?
