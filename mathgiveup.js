function solution(answers) {
    var answer = [];
    
    const ppl1=[1,2,3,4,5];
    const ppl2=[2,1,2,3,2,4,2,5];
    const ppl3=[3,3,1,1,2,2,4,4,5,5];
    
    const score=[];
    
    let one=0, two=0, three=0;
    for(let i=0;i<answers.length;i++){
        if(answers[i]==ppl1[i%ppl1.length])
            one++;
        if(answers[i]==ppl2[i%ppl2.length])
            two++;
        if(answers[i]==ppl3[i%ppl3.length])
            three++;
    }
    
    score[1]=one;
    score[2]=two;
    score[3]=three;
    
    let temp=0;
    for(let i=1;i<=3;i++){
        if(temp<score[i]){
            temp=score[i];
            answer.length=0; 
            answer.push(i);
        }
        else if(temp==score[i]){
            answer.push(i);
        }
    }
    
    return answer;
}
