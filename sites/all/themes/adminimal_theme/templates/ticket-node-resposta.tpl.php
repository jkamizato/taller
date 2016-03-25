<h1>Ticket <?php print $node->title;?></h1>
<?php
$categoria = field_view_field('node', $node, 'field_ticket_categoria');
print render($categoria);
$produto = field_view_field('node', $node, 'field_ticket_produto');
print render($produto);
$date = format_date($node->created, 'medium_brasil');
print render($date);
?>
<div style="border: 1px solid">
    <?php $body = field_view_field('node', $node, 'body', array('label' => 'hidden'));
        print render($body);
    ?>
</div>