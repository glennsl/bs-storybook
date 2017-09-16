type section;

type story = unit => ReasonReact.reactElement;

external createSection : string => 'a => section =
  "storiesOf" [@@bs.val] [@@bs.module "@storybook/react"];

external addDecorator : section => (story => ReasonReact.reactElement) => unit = "" [@@bs.send];

external addStory : section => string => story => unit = "add" [@@bs.send];
