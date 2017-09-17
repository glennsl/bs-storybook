let pageSection = Storybook.createSection "Page" [%bs.raw "module"];

Storybook.addDecorator
  pageSection
  (
    fun renderStory =>
      <div style=(ReactDOMRe.Style.make backgroundColor::"#000000" color::"#ffffff" ())>
        (renderStory ())
      </div>
  );

Storybook.addStory pageSection "Test" (fun () => <Page message="Hello!" />);
