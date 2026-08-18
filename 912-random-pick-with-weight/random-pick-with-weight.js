/**
 * @param {number[]} w
 */
var Solution = function(w) {
    let weight = [];
    
    let total=0;
    for(let wt of w){
        total+= wt;
        weight.push(total);
    }
    this.total = total;
    this.weight = weight;
    
};

/**
 * @return {number}
 */
Solution.prototype.pickIndex = function() {
    let randomNo = Math.floor(Math.random()*this.total);
    console.log(this.total);
    let s=0;
    let e=this.weight.length-1;
    let mid = Math.floor(s+(e-s)/2);
    while(s<e){
        if(this.weight[mid]>randomNo){
            e=mid;
        }
        else s=mid+1;
        mid= Math.floor(s+(e-s)/2);
    } 
    return s;
    
};

/** 
 * Your Solution object will be instantiated and called as such:
 * var obj = new Solution(w)
 * var param_1 = obj.pickIndex()
 */