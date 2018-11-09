namespace listBtn
{
    [Uno.Compiler.UxGenerated]
    public partial class Button: Fuse.Controls.Panel
    {
        string _field_Send;
        [global::Uno.UX.UXOriginSetter("SetSend")]
        public string Send
        {
            get { return _field_Send; }
            set { SetSend(value, null); }
        }
        public void SetSend(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Send)
            {
                _field_Send = value;
                OnPropertyChanged("Send", origin);
            }
        }
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
        string _field_DataKey;
        [global::Uno.UX.UXOriginSetter("SetDataKey")]
        public string DataKey
        {
            get { return _field_DataKey; }
            set { SetDataKey(value, null); }
        }
        public void SetDataKey(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_DataKey)
            {
                _field_DataKey = value;
                OnPropertyChanged("DataKey", origin);
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
        string _field_SelectedBgColor;
        [global::Uno.UX.UXOriginSetter("SetSelectedBgColor")]
        public string SelectedBgColor
        {
            get { return _field_SelectedBgColor; }
            set { SetSelectedBgColor(value, null); }
        }
        public void SetSelectedBgColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_SelectedBgColor)
            {
                _field_SelectedBgColor = value;
                OnPropertyChanged("SelectedBgColor", origin);
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
        global::Uno.UX.Property<float4> btnBackground_Color_inst;
        global::Uno.UX.Property<float> btnText_FontSize_inst;
        global::Uno.UX.Property<string> btnText_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float> btnBackground_Opacity_inst;
        global::Uno.UX.Property<float4> btnText_Color_inst;
        global::Uno.UX.Property<string> this_Send_inst;
        global::Uno.UX.Property<Fuse.Elements.Visibility> checkIcon_Visibility_inst;
        global::Uno.UX.Property<float4> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Controls.Rectangle btnBackground;
        internal global::fa_check checkIcon;
        internal global::generaltext.Text btnText;
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
            var temp3 = new global::Fuse.Reactive.Constant(this);
            btnBackground = new global::Fuse.Controls.Rectangle();
            btnBackground_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(btnBackground, __selector0);
            var temp4 = new global::Fuse.Reactive.Property(temp3, Haslaamispaivakirja_accessor_listBtn_Button_BgColor.Singleton);
            var temp5 = new global::Fuse.Reactive.Constant(this);
            btnText = new global::generaltext.Text();
            btnText_FontSize_inst = new Haslaamispaivakirja_FuseControlsTextControl_FontSize_Property(btnText, __selector1);
            var temp6 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_listBtn_Button_FontSize.Singleton);
            var temp7 = new global::Fuse.Reactive.Constant(this);
            btnText_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(btnText, __selector2);
            var temp8 = new global::Fuse.Reactive.Property(temp7, Haslaamispaivakirja_accessor_listBtn_Button_Text.Singleton);
            var temp9 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Selection.Selectable();
            temp_Value_inst = new Haslaamispaivakirja_FuseSelectionSelectable_Value_Property(temp, __selector2);
            var temp10 = new global::Fuse.Reactive.Property(temp9, Haslaamispaivakirja_accessor_listBtn_Button_DataKey.Singleton);
            var temp11 = new global::Fuse.Reactive.Constant(this);
            btnBackground_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(btnBackground, __selector3);
            btnText_Color_inst = new Haslaamispaivakirja_FuseControlsTextControl_Color_Property(btnText, __selector0);
            this_Send_inst = new Haslaamispaivakirja_listBtnButton_Send_Property(this, __selector4);
            var temp12 = new global::Fuse.Reactive.Constant(this);
            checkIcon = new global::fa_check();
            checkIcon_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(checkIcon, __selector5);
            var temp1 = new global::Fuse.Animations.Change<float4>(btnBackground_Color_inst);
            temp1_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp1, __selector2);
            var temp13 = new global::Fuse.Reactive.Property(temp11, Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor.Singleton);
            var temp2 = new global::Fuse.Triggers.Actions.Set<string>(this_Send_inst);
            temp2_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property(temp2, __selector2);
            var temp14 = new global::Fuse.Reactive.Property(temp12, Haslaamispaivakirja_accessor_listBtn_Button_DataKey.Singleton);
            var temp15 = new global::Fuse.Effects.DropShadow();
            var temp16 = new global::Fuse.Reactive.DataBinding(btnBackground_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
            var temp17 = new global::Fuse.Reactive.DataBinding(btnText_FontSize_inst, temp6, Fuse.Reactive.BindingMode.Read);
            var temp18 = new global::Fuse.Reactive.DataBinding(btnText_Value_inst, temp8, Fuse.Reactive.BindingMode.Read);
            var temp19 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            var temp20 = new global::Fuse.Selection.WhileSelected();
            var temp21 = new global::Fuse.Triggers.Actions.DebugAction();
            var temp22 = new global::Fuse.Animations.Change<float>(btnBackground_Opacity_inst);
            var temp23 = new global::Fuse.Animations.Change<float4>(btnText_Color_inst);
            var temp24 = new global::Fuse.Animations.Scale();
            var temp25 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(checkIcon_Visibility_inst);
            var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp13, Fuse.Reactive.BindingMode.Read);
            var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
            var temp28 = new global::Fuse.Selection.Deselected();
            var temp29 = new global::Fuse.Animations.Scale();
            var temp30 = new global::Fuse.Triggers.Actions.Set<string>(this_Send_inst);
            var temp31 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>(checkIcon_Visibility_inst);
            var temp32 = new global::Fuse.Gestures.Tapped();
            var temp33 = new global::Fuse.Triggers.Actions.DebugAction();
            var temp34 = new global::Fuse.Animations.Change<float4>(btnBackground_Color_inst);
            var temp35 = new global::Fuse.Selection.ToggleSelection();
            this.BgColor = "#FFF";
            this.SelectedBgColor = "#8bc34a";
            this.FontSize = 16f;
            this.Margin = float4(0f, 3f, 0f, 3f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/listBtn.ux";
            btnBackground.CornerRadius = float4(0f, 0f, 0f, 0f);
            btnBackground.Opacity = 0.8f;
            btnBackground.Layer = Fuse.Layer.Background;
            btnBackground.Name = __selector6;
            btnBackground.SourceLineNumber = 9;
            btnBackground.SourceFileName = "Components/listBtn.ux";
            btnBackground.Children.Add(temp15);
            btnBackground.Bindings.Add(temp16);
            temp15.Size = 2f;
            temp15.Angle = 90f;
            temp15.Distance = 1f;
            temp15.Spread = 0.2f;
            temp15.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp15.SourceLineNumber = 10;
            temp15.SourceFileName = "Components/listBtn.ux";
            temp4.SourceLineNumber = 9;
            temp4.SourceFileName = "Components/listBtn.ux";
            temp3.SourceLineNumber = 9;
            temp3.SourceFileName = "Components/listBtn.ux";
            checkIcon.FontSize = 18f;
            checkIcon.TextAlignment = Fuse.Controls.TextAlignment.Right;
            checkIcon.Color = float4(0.07058824f, 0.372549f, 0.3882353f, 1f);
            checkIcon.Alignment = Fuse.Elements.Alignment.Default;
            checkIcon.Visibility = Fuse.Elements.Visibility.Hidden;
            checkIcon.Margin = float4(5f, 0f, 10f, 0f);
            checkIcon.Opacity = 1f;
            checkIcon.Name = __selector7;
            checkIcon.SourceLineNumber = 13;
            checkIcon.SourceFileName = "Components/listBtn.ux";
            btnText.TextAlignment = Fuse.Controls.TextAlignment.Left;
            btnText.Color = float4(0.4f, 0.4f, 0.4f, 1f);
            btnText.Margin = float4(0f, 0f, 35f, 0f);
            btnText.Padding = float4(0f, 0f, 0f, 0f);
            btnText.Name = __selector8;
            btnText.SourceLineNumber = 15;
            btnText.SourceFileName = "Components/listBtn.ux";
            btnText.Bindings.Add(temp17);
            btnText.Bindings.Add(temp18);
            temp6.SourceLineNumber = 15;
            temp6.SourceFileName = "Components/listBtn.ux";
            temp5.SourceLineNumber = 15;
            temp5.SourceFileName = "Components/listBtn.ux";
            temp8.SourceLineNumber = 15;
            temp8.SourceFileName = "Components/listBtn.ux";
            temp7.SourceLineNumber = 15;
            temp7.SourceFileName = "Components/listBtn.ux";
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "Components/listBtn.ux";
            temp.Bindings.Add(temp19);
            temp10.SourceLineNumber = 17;
            temp10.SourceFileName = "Components/listBtn.ux";
            temp9.SourceLineNumber = 17;
            temp9.SourceFileName = "Components/listBtn.ux";
            temp20.SourceLineNumber = 19;
            temp20.SourceFileName = "Components/listBtn.ux";
            temp20.Animators.Add(temp1);
            temp20.Animators.Add(temp22);
            temp20.Animators.Add(temp23);
            temp20.Animators.Add(temp24);
            temp20.Actions.Add(temp21);
            temp20.Actions.Add(temp2);
            temp20.Actions.Add(temp25);
            temp20.Bindings.Add(temp26);
            temp20.Bindings.Add(temp27);
            temp21.Message = "While Selected!";
            temp21.SourceLineNumber = 20;
            temp21.SourceFileName = "Components/listBtn.ux";
            temp13.SourceLineNumber = 21;
            temp13.SourceFileName = "Components/listBtn.ux";
            temp11.SourceLineNumber = 21;
            temp11.SourceFileName = "Components/listBtn.ux";
            temp22.Value = 1f;
            temp23.Value = float4(1f, 1f, 1f, 1f);
            temp24.Factor = 1.01f;
            temp24.Duration = 0.08;
            temp24.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp2.SourceLineNumber = 26;
            temp2.SourceFileName = "Components/listBtn.ux";
            temp14.SourceLineNumber = 26;
            temp14.SourceFileName = "Components/listBtn.ux";
            temp12.SourceLineNumber = 26;
            temp12.SourceFileName = "Components/listBtn.ux";
            temp25.Value = Fuse.Elements.Visibility.Visible;
            temp25.SourceLineNumber = 27;
            temp25.SourceFileName = "Components/listBtn.ux";
            temp28.SourceLineNumber = 29;
            temp28.SourceFileName = "Components/listBtn.ux";
            temp28.Animators.Add(temp29);
            temp28.Actions.Add(temp30);
            temp28.Actions.Add(temp31);
            temp29.Factor = 1f;
            temp29.Duration = 0.08;
            temp29.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp30.Value = "";
            temp30.SourceLineNumber = 32;
            temp30.SourceFileName = "Components/listBtn.ux";
            temp31.Value = Fuse.Elements.Visibility.Hidden;
            temp31.SourceLineNumber = 33;
            temp31.SourceFileName = "Components/listBtn.ux";
            temp32.SourceLineNumber = 36;
            temp32.SourceFileName = "Components/listBtn.ux";
            temp32.Animators.Add(temp34);
            temp32.Actions.Add(temp33);
            temp32.Actions.Add(temp35);
            temp33.Message = "Tapped!";
            temp33.SourceLineNumber = 37;
            temp33.SourceFileName = "Components/listBtn.ux";
            temp34.Value = float4(1f, 1f, 1f, 1f);
            temp34.Duration = 0.08;
            temp35.SourceLineNumber = 39;
            temp35.SourceFileName = "Components/listBtn.ux";
            this.Children.Add(btnBackground);
            this.Children.Add(checkIcon);
            this.Children.Add(btnText);
            this.Children.Add(temp);
            this.Children.Add(temp20);
            this.Children.Add(temp28);
            this.Children.Add(temp32);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "FontSize";
        static global::Uno.UX.Selector __selector2 = "Value";
        static global::Uno.UX.Selector __selector3 = "Opacity";
        static global::Uno.UX.Selector __selector4 = "Send";
        static global::Uno.UX.Selector __selector5 = "Visibility";
        static global::Uno.UX.Selector __selector6 = "btnBackground";
        static global::Uno.UX.Selector __selector7 = "checkIcon";
        static global::Uno.UX.Selector __selector8 = "btnText";
    }
}
