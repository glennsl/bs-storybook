let m = [%bs.raw "module"];

let pageSection = Storybook.createSection "Page" m;

Storybook.addDecorator
  pageSection
  (
    fun renderStory =>
      <div style=(ReactDOMRe.Style.make backgroundColor::"#000000" color::"#ffffff" ())>
        (renderStory ())
      </div>
  );

Storybook.addStory pageSection "Test" (fun () => <Page message="Hello!" />);
