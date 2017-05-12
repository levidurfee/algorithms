<?php

class Node {
	public $data;
	public $right;
	public $left;
	public function __construct($data) {
		$this->data = $data;
	}
}

class BST {
	public $root;
    public function __construct($value = null) {
	    if($value != null) {
		    $this->root = new Node($value);
	    }
    }

    public function search($value) {
	    $node = $this->root;

	    while($node) {
		    if($node->data > $value) {
			    $node = $node->left;
		    } elseif($node->data < $value) {
			    $node = $node->right;
		    } else {
    			break;
	    	}
	    }

	    return $node;
    }

    public function insert($value) {
	    $node = $this->root;

	    while($node) {
		    if($node->data > $value) {
    			if($node->left) {
	    			$node = $node->left;
		    	} else {
    				$node = $node->left = new Node($value);
	    			break;
		    	}
    		} elseif($node->data < $value) {
	    		if($node->right) {
		    		$node = $node->right;
    			} else {
	    			$node = $node->right = new Node($value);
		    		break;
    			}
	    	} else {
		    	break;
    		}
    	}
    	return $node;
    }
}

$b = new BST(5);
for($i=0; $i<20; $i++) {
    $b->insert($i);
}

var_dump($b->search(19));

