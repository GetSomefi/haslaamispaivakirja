namespace basic
{
    [Uno.Compiler.UxGenerated]
    public partial class TextBoxFakeDropDown: Fuse.Controls.Rectangle
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
        string _field_Value;
        [global::Uno.UX.UXOriginSetter("SetValue")]
        public string Value
        {
            get { return _field_Value; }
            set { SetValue(value, null); }
        }
        public void SetValue(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Value)
            {
                _field_Value = value;
                OnPropertyChanged("Value", origin);
            }
        }
        string _field_TextAlignment;
        [global::Uno.UX.UXOriginSetter("SetTextAlignment")]
        public string TextAlignment
        {
            get { return _field_TextAlignment; }
            set { SetTextAlignment(value, null); }
        }
        public void SetTextAlignment(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_TextAlignment)
            {
                _field_TextAlignment = value;
                OnPropertyChanged("TextAlignment", origin);
            }
        }
        string _field_PlaceHolderColor;
        [global::Uno.UX.UXOriginSetter("SetPlaceHolderColor")]
        public string PlaceHolderColor
        {
            get { return _field_PlaceHolderColor; }
            set { SetPlaceHolderColor(value, null); }
        }
        public void SetPlaceHolderColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_PlaceHolderColor)
            {
                _field_PlaceHolderColor = value;
                OnPropertyChanged("PlaceHolderColor", origin);
            }
        }
        global::Uno.UX.Property<string> this_Send_inst;
        global::Uno.UX.Property<float4> TextBoxFakeField_Color_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> TextBoxFakeField_Value_inst;
        global::Uno.UX.Property<Fuse.Controls.TextAlignment> TextBoxFakeField_TextAlignment_inst;
        internal global::Fuse.Controls.Text TextBoxFakeField;
        internal global::Fuse.Triggers.Actions.Callback TheEnter;
        internal global::Fuse.Reactive.EventBinding temp_eb19;
        static TextBoxFakeDropDown()
        {
        }
        [global::Uno.UX.UXConstructor]
        public TextBoxFakeDropDown()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this_Send_inst = new Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property(this, __selector0);
            var temp1 = new global::Fuse.Reactive.Constant(this);
            TextBoxFakeField = new global::Fuse.Controls.Text();
            TextBoxFakeField_Color_inst = new Haslaamispaivakirja_FuseControlsTextControl_Color_Property(TextBoxFakeField, __selector1);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(this_Send_inst);
            temp_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property(temp, __selector2);
            var temp2 = new global::Fuse.Reactive.Property(temp1, Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value.Singleton);
            var temp3 = new global::Fuse.Reactive.Data("isOnInput");
            var temp4 = new global::Fuse.Reactive.Constant(this);
            TextBoxFakeField_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(TextBoxFakeField, __selector2);
            var temp5 = new global::Fuse.Reactive.Property(temp4, Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value.Singleton);
            var temp6 = new global::Fuse.Reactive.Constant(this);
            TextBoxFakeField_TextAlignment_inst = new Haslaamispaivakirja_FuseControlsTextControl_TextAlignment_Property(TextBoxFakeField, __selector3);
            var temp7 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment.Singleton);
            var temp8 = new global::Fuse.Reactive.Constant(this);
            var temp9 = new global::Fuse.Reactive.Property(temp8, Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_PlaceHolderColor.Singleton);
            var temp10 = new global::Fuse.Reactive.Data("entrystr");
            var temp11 = new global::Fuse.Gestures.Clicked();
            var temp12 = new global::Fuse.Triggers.Actions.DebugAction();
            var temp13 = new global::Fuse.Triggers.Actions.Set<float4>(TextBoxFakeField_Color_inst);
            TheEnter = new global::Fuse.Triggers.Actions.Callback();
            var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb19 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp15 = new global::Fuse.Reactive.DataBinding(TextBoxFakeField_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Reactive.DataBinding(TextBoxFakeField_TextAlignment_inst, temp7, Fuse.Reactive.BindingMode.Default);
            var temp17 = new global::Fuse.Reactive.DataBinding(TextBoxFakeField_Color_inst, temp9, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Reactive.DataBinding(this_Send_inst, temp10, Fuse.Reactive.BindingMode.Default);
            this.PlaceHolderColor = "#FFFFFFB2";
            this.Color = float4(0f, 0f, 0f, 0.09803922f);
            this.Margin = float4(5f, 0f, 5f, 0f);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            TextBoxFakeField.TextColor = Fuse.Drawing.Colors.White;
            TextBoxFakeField.Margin = float4(10f, 10f, 10f, 10f);
            TextBoxFakeField.Padding = float4(0f, 0f, 0f, 0f);
            TextBoxFakeField.Name = __selector4;
            TextBoxFakeField.SourceLineNumber = 9;
            TextBoxFakeField.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            TextBoxFakeField.Children.Add(temp11);
            TextBoxFakeField.Bindings.Add(temp15);
            TextBoxFakeField.Bindings.Add(temp16);
            TextBoxFakeField.Bindings.Add(temp17);
            temp11.SourceLineNumber = 10;
            temp11.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp11.Actions.Add(temp12);
            temp11.Actions.Add(temp);
            temp11.Actions.Add(temp13);
            temp11.Actions.Add(TheEnter);
            temp11.Bindings.Add(temp14);
            temp11.Bindings.Add(temp_eb19);
            temp12.Message = "Typed and Enter!";
            temp12.SourceLineNumber = 11;
            temp12.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp.SourceLineNumber = 12;
            temp.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp2.SourceLineNumber = 12;
            temp2.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp1.SourceLineNumber = 12;
            temp1.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp13.Value = float4(1f, 1f, 1f, 1f);
            temp13.SourceLineNumber = 13;
            temp13.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            TheEnter.SourceLineNumber = 14;
            TheEnter.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            TheEnter.Handler += temp_eb19.OnEvent;
            temp3.SourceLineNumber = 14;
            temp3.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp5.SourceLineNumber = 9;
            temp5.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp4.SourceLineNumber = 9;
            temp4.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp7.SourceLineNumber = 9;
            temp7.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp6.SourceLineNumber = 9;
            temp6.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp9.SourceLineNumber = 9;
            temp9.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp8.SourceLineNumber = 9;
            temp8.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            temp10.SourceLineNumber = 1;
            temp10.SourceFileName = "Components/basic.TextBoxFakeDropDown.ux";
            this.Children.Add(TextBoxFakeField);
            this.Bindings.Add(temp18);
        }
        static global::Uno.UX.Selector __selector0 = "Send";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "Value";
        static global::Uno.UX.Selector __selector3 = "TextAlignment";
        static global::Uno.UX.Selector __selector4 = "TextBoxFakeField";
    }
}
