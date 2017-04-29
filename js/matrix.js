class Matrix {

    static multiply(a, b) {
        let result = [];
        for(let i=0; i<a.length; i++) {
            result[i] = [];
            for(let j=0; j<b[0].length; j++) {
                let sum = 0;
                for(let k=0; k<a[0].length; k++) {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
            }
        }

        return result;
    }

    static add(a, b) {
        let result = [];
        for(let i=0; i<a.length; i++) {
            result[i] = [];
            for(let j=0; j<b[0].length; j++) {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        return result;
    }
}

let a = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

let b = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8]
];

console.log(Matrix.multiply(a, b));

console.log(Matrix.add(a, b));

