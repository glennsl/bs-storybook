import { configure } from '@storybook/react';

function loadStories() {
  require('../src/pageStories.re');
}

configure(loadStories, module);
