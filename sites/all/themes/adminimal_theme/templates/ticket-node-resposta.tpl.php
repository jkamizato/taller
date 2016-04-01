<?php
$language = $node->language;
kpr($node);?>
<h1>Ticket <?php print $node->field_ticket_codigo[$language][0]['value'];?></h1>
<?php
$categoria = field_view_field('node', $node, 'field_ticket_categoria', array('type' => 'taxonomy_term_reference_plain'));
print render($categoria);
$produto = field_view_field('node', $node, 'field_ticket_produto', array('type' => 'taxonomy_term_reference_plain'));
print render($produto);
$date = format_date($node->created, 'medium_brasil');

?>
<strong>Data:</strong> <?php print render($date);?>
<div style="border: 1px solid">
    <?php $body = field_view_field('node', $node, 'body', array('label' => 'hidden'));
        print render($body);
    ?>
</div>