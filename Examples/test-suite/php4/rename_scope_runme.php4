<?php
// Sample test file

require "tests.php4";
require "rename_scope.php";

check::classes(array("interface_up","interface_bp","natural_up","natural_bp"));

check::classmethods("Interface_UP",array("interface_up"));
check::classmethods("Interface_BP",array("interface_bp"));
check::classmethods("Natural_UP",array("interface_up","natural_up","rtest"));
check::classmethods("Natural_BP",array("interface_bp","natural_bp","rtest"));
check::classparent("Natural_UP","interface_up");
check::classparent("Natural_BP","interface_bp");

check::done();
?>
