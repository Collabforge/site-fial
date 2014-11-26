

<?php if (!$is_front): ?>
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="nodewrapper">
  <div class="userpicture"><?php /* add "print $user_picture;" here to fix node user profiles displaying */ ?></div>

  <div class="templatedtitlestyle">  <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h5<?php print $title_attributes; ?>><a href="<?php print $content['field_event_url']['#items'][0]['url']; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?></div>

    <?php if ($display_submitted): ?>
      <div class="submitted">
        <div class="submitted-content-posted">
    <?php print 'Posted ' . $date; ?><br />
    <?php print ' by ' . $name; ?>
      </div>
    <?php endif; ?></div><div class="clearfix"></div>
    <div class="contentarticle"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
	hide($content['field_event_url']);
        print render($content);
      ?>
    </div>

    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>

  </article>
<?php endif; ?>

