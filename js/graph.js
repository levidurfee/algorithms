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

let checkFriendship = (graph, names, i, j) => {
    if(graph[i].indexOf(j) > 0) {
        console.log(names[i] + " and " + names[j] + " are friends!");
        return true;
    }

    console.log(names[i] + " and " + names[j] + " are NOT friends.");
    return false;
};

// are Levi and Darth friends?
checkFriendship(graph, names, 0, 3);

// are Levi and Wolverine friends?! (You know it!)
checkFriendship(graph, names, 0, 5);

