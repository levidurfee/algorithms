class Matrix {
    constructor(a, b) {
        this.a = a;
        this.b = b;
    }

    multiply() {
        let result = [];
        for(let i=0; i<this.a.length; i++) {
            result[i] = [];
            for(let j=0; j<this.b[0].length; j++) {
                let sum = 0;
                for(let k=0; k<this.a[0].length; k++) {
                    sum += this.a[i][k] * this.b[k][j];
                }
                result[i][j] = sum;
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

let m = new Matrix(a, b);

console.log(m.multiply());

