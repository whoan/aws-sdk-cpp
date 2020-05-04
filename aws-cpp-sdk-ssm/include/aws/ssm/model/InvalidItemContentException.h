﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more content items is not valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InvalidItemContentException">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InvalidItemContentException
  {
  public:
    InvalidItemContentException();
    InvalidItemContentException(Aws::Utils::Json::JsonView jsonValue);
    InvalidItemContentException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    
    inline InvalidItemContentException& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    
    inline InvalidItemContentException& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    
    inline InvalidItemContentException& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidItemContentException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidItemContentException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidItemContentException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
