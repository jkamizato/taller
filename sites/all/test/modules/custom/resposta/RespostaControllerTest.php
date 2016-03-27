<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/24/16
 * Time: 23:51
 */
use Resposta\Controller\RespostaController;

include realpath(dirname(__FILE__)) . '/../../../phpunit_bootstrap.inc';

class RespostaControllerTest extends  PHPUnit_Framework_TestCase
{
    public function testClassType() {
        $respostaController = new RespostaController();
        $this->assertEquals('Resposta\Controller\RespostaController', get_class($respostaController));
    }

}