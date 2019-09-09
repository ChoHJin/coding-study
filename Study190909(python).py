''' 코리아 초등학교에서 1학년부터 4학년까지 중간고사 시험을 보았다. 

    4학년은 70점 이상이면 합격, 그 이외의 학년은 60점 이상이면 합격이다. 

    이를 판단하는 프로그램을 작성해보자.

    점수가 0미만 100초과이면 경고문구 출력!'''

Grade = int(input("학년을 입력하세요.: "))  #학년 입력
Score = int(input("점수를 입력하세요.: "))  #점수 입력

 
if Grade <= 0 or Grade > 4 or Score > 100 or Score <= 0: #부적절한 조건을 1차적으로 걸러줌
   print("제대로 입력하세요")                                 #이거 안넣으면 합격,불합격 과 동시에 '제대로입력하세요'도 같이 출력됨
    
if Grade == 4 and Score >= 70: # 4학년 합격조건
        
    if Grade <= 0 or Grade > 4 or Score > 100 or Score <= 0: #2차로 조건을 걸러서 결과값이 완벽하게 잘나오게해줌 
        print("제대로 입력하세요")
    else:
        print("합격입니다.")

else:
    if Grade == 4 and Score < 70:
        print("불합격입니다.")
    
    
    
if Grade > 0 and Grade <= 3 and Score >= 60: #1~3학년때의 합격조건
        
    if Grade <= 0 or Grade > 4 or Score > 100 or Score <= 0: #2차로 조건을 걸러서 결과값이 완벽하게 잘나오게해줌 
        print("제대로 입력하세요")
    else:
        print("합격입니다")
    
else:
    if Grade > 0 and Grade <= 3 and Score < 60:
        print("불합격입니다..")
