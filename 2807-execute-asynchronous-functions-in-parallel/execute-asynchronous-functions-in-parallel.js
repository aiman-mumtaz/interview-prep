/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise((resolve,reject) => {
        const ans = new Array(functions.length);
        let cnt=0;
        functions.forEach((fn,index)=>{
            fn().then((val)=>{
                ans[index]=val;
                cnt++;
                if(cnt == ans.length)
                    resolve(ans);
            }).catch((reason)=>{
                reject(reason);
            })
        })
    })
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */