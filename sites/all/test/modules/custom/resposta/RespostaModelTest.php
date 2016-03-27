<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/24/16
 * Time: 23:51
 */

use Resposta\Model;
require_once __DIR__ . '/../../../../modules/custom/resposta/RespostaModel.php';

include realpath(dirname(__FILE__)) . '/../../../phpunit_bootstrap.inc';

class RespostaModelTest extends  PHPUnit_Framework_TestCase
{

    public function testClassModel()
    {
        $respostaModel = new Resposta\Model\RespostaModel();
        $this->assertEquals('Resposta\Model\RespostaModel', get_class($respostaModel));
    }
}