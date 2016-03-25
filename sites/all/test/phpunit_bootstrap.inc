<?php
/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 00:13
 */

$_SERVER['REMOTE_ADDR'] = "127.0.0.1";
$_SERVER['REQUEST_METHOD']  = 'GET';

$drupal_path = realpath(dirname(__FILE__)) . '/../../../';
var_dump(realpath(dirname(__FILE__)));
define('DRUPAL_ROOT', $drupal_path);
require_once $drupal_path . './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);