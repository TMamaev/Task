test_matches_within_delta(){
    assert_within_delta 12345 $( echo 12345 | ./main.exe) 0
}

test_matches_within_delta(){
    assert_within_delta 12345 $( echo +12345 | ./main.exe) 0
}

test_matches_within_delta(){
    assert_within_delta -12345 $( echo -12345 | ./main.exe) 0
}

test_matches_within_delta(){
    assert_within_delta 12345 $( echo 00012345 | ./main.exe) 0
}

test_matches_within_delta(){
    assert_within_delta -12345 $( echo -00012345 | ./main.exe) 0
}

test_matches_within_delta(){
    assert_within_delta 0 $( echo 0 | ./main.exe) 0
}