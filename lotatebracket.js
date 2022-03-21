function expression(s){
    let stack=[];
    
    for(let i=0;i<s.length;i++){
        let temp;
        if(s[i]===')'){
            temp=stack.pop();
            if(temp!=='(') return false;
        }
        else if(s[i]==='}'){
            temp=stack.pop();
            if(temp!=='{') return false;
        }
        else if(s[i]===']'){
            temp=stack.pop();
            if(temp!=='[') return false;
        }
        else{
            stack.push(s[i]);
        }
    }
    
    if(stack.length===0) return true;
    else return false;
}

function solution(s) {
    var answer = 0;
    
    for(let i=0;i<s.length;i++){
        var temp=s.substring(0,i);
        var origin=s.substring(i,s.length);
        
        //console.log(origin+temp, expression(origin+temp));
        
        if(expression(origin+temp)){
            answer++;
        }
    }
    return answer;
}
