namespace basicBtn
{
    [Uno.Compiler.UxGenerated]
    public partial class Button: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        string _field_BgColor;
        [global::Uno.UX.UXOriginSetter("SetBgColor")]
        public string BgColor
        {
            get { return _field_BgColor; }
            set { SetBgColor(value, null); }
        }
        public void SetBgColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_BgColor)
            {
                _field_BgColor = value;
                OnPropertyChanged("BgColor", origin);
            }
        }
        float _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public float FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float> temp1_FontSize_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        static Button()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Button()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp2 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Rectangle();
            temp_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Property(temp2, Haslaamispaivakirja_accessor_basicBtn_Button_BgColor.Singleton);
            var temp4 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::generaltext.Text();
            temp1_FontSize_inst = new Haslaamispaivakirja_FuseControlsTextControl_FontSize_Property(temp1, __selector1);
            var temp5 = new global::Fuse.Reactive.Property(temp4, Haslaamispaivakirja_accessor_basicBtn_Button_FontSize.Singleton);
            var temp6 = new global::Fuse.Reactive.Constant(this);
            temp1_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp1, __selector2);
            var temp7 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_basicBtn_Button_Text.Singleton);
            var temp8 = new global::Fuse.Effects.DropShadow();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, Fuse.Reactive.BindingMode.Read);
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp5, Fuse.Reactive.BindingMode.Read);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
            var temp12 = new global::Fuse.Gestures.WhilePressed();
            var temp13 = new global::Fuse.Animations.Scale();
            this.BgColor = "#DA4245";
            this.FontSize = 16f;
            this.Margin = float4(15f, 15f, 15f, 15f);
            this.Padding = float4(15f, 15f, 15f, 15f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/basicBtn.ux";
            temp.CornerRadius = float4(0f, 0f, 0f, 0f);
            temp.Layer = Fuse.Layer.Background;
            temp.SourceLineNumber = 6;
            temp.SourceFileName = "Components/basicBtn.ux";
            temp.Children.Add(temp8);
            temp.Bindings.Add(temp9);
            temp8.Size = 2f;
            temp8.Angle = 90f;
            temp8.Distance = 1f;
            temp8.Spread = 0.2f;
            temp8.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp8.SourceLineNumber = 7;
            temp8.SourceFileName = "Components/basicBtn.ux";
            temp3.SourceLineNumber = 6;
            temp3.SourceFileName = "Components/basicBtn.ux";
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "Components/basicBtn.ux";
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp1.SourceLineNumber = 10;
            temp1.SourceFileName = "Components/basicBtn.ux";
            temp1.Bindings.Add(temp10);
            temp1.Bindings.Add(temp11);
            temp5.SourceLineNumber = 10;
            temp5.SourceFileName = "Components/basicBtn.ux";
            temp4.SourceLineNumber = 10;
            temp4.SourceFileName = "Components/basicBtn.ux";
            temp7.SourceLineNumber = 10;
            temp7.SourceFileName = "Components/basicBtn.ux";
            temp6.SourceLineNumber = 10;
            temp6.SourceFileName = "Components/basicBtn.ux";
            temp12.SourceLineNumber = 12;
            temp12.SourceFileName = "Components/basicBtn.ux";
            temp12.Animators.Add(temp13);
            temp13.Factor = 0.95f;
            temp13.Duration = 0.08;
            temp13.Easing = Fuse.Animations.Easing.QuadraticOut;
            this.Children.Add(temp);
            this.Children.Add(temp1);
            this.Children.Add(temp12);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "FontSize";
        static global::Uno.UX.Selector __selector2 = "Value";
    }
}
