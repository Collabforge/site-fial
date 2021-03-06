// you can override default options globally, so they apply to every .expander() call
$.expander.defaults.slicePoint = 500;

$(document).ready(function() {
  // simple example, using all default options unless overridden globally
  $('div.expandable').expander();

  // *** OR ***

  // override default options (also overrides global overrides)
  $('div.expandable').expander({
    slicePoint:       500,  // default is 100
    expandPrefix:     ' ', // default is '... '
    expandText:       '[...]', // default is 'read more'
    collapseTimer:    5000, // re-collapses after 5 seconds; default is 0, so no re-collapsing
    userCollapseText: '[^]'  // default is 'read less'
  });

});