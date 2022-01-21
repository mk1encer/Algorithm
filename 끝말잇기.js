function solution(n, words) {
    var answer = [];
    let ref=[];

    let turn=0;
    for(let i=0;i<words.length;i++){
        turn++;
        
        if(i>0 && words[i-1].charAt(words[i-1].length-1)!==words[i].charAt(0)){
            answer[0]= (turn%n===0) ?n:turn%n ;
            answer[1]=Math.ceil(turn/n);
            return answer;
        }
        for(let j=0;j<ref.length;j++){
            if(ref[j]===words[i]){
                answer[0]= (turn%n===0) ?n:turn%n ;
                answer[1]=Math.ceil(turn/n);
                return answer;
            }
        }
        ref[ref.length+1]=words[i];
    }
    answer[0]=0;
    answer[1]=0;
    return answer;
}
