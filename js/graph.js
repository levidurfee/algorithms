let names = [
    /*0*/"levi",
    /*1*/"peter pan",
    /*2*/"batman",
    /*3*/"darth vader",
    /*4*/"lex luther",
    /*5*/"wolverine",
];

let graph = [
    [1, 2, 5], /* levi's friends */
    [0, 2, 5], /* peter's friends */
    [0, 1, 5], /* bat's friends */
    [4],       /* vader's friend */
    [3],       /* lex's friend */
    [0, 1, 2], /* wolverine's friends */
];

let checkFriendship = (graph, i, j) => {
    if(graph[i].indexOf(j) > 0) {
        return true;
    }

    return false;
};

// are Levi and Darth friends?
console.log(checkFriendship(graph, 0, 3));

// are Levi and Wolverine friends?! (You know it!)
console.log(checkFriendship(graph, 0, 5));

