<?php

class LinkedList {
    public $next = null;
    public $data;

    public function __construct($data) {
        $this->data = $data;
    }

    public function appendToTail($data) {
        $end = new LinkedList($data);
        $n = $this;
        while($n->next != null) {
            $n = $n->next;
        }
        $n->next = $end;
    }
}

$ll = new LinkedList(20);
$ll->appendToTail(5);
$ll->appendToTail(100);
$ll->appendToTail(30);

var_dump($ll);

