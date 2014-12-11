	<?php
   $redirect_scoopit = $content['field_post_external_url_']['#items'][0]['value'];
   	
      ?>
      <script type="text/javascript">
      window.location = "<?php echo $redirect_scoopit; ?>";
      </script>
  <h1>Now loading the article...</h1>

  If this fails to load, <a href="<?php echo $redirect_scoopit; ?>">please click here</a>.