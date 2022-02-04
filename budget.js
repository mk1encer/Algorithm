function solution(d, budget) {
    var answer = 0;
    d.sort((a,b)=>{return a-b}); //정렬
    
    for(let i=0;i<d.length;i++){
        if(budget-d[i]<0) break;
        
        budget-=d[i];
        answer++;
    }
  //어짜피 신청예산이 적은 부서부터 주면 그게 최대.
    console.log(d);
    return answer;
}
