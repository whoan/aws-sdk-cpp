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

#include <aws/accessanalyzer/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

ValidationException::ValidationException() : 
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldList"))
  {
    Array<JsonView> fieldListJsonList = jsonValue.GetArray("fieldList");
    for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
    {
      m_fieldList.push_back(fieldListJsonList[fieldListIndex].AsObject());
    }
    m_fieldListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_fieldListHasBeenSet)
  {
   Array<JsonValue> fieldListJsonList(m_fieldList.size());
   for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
   {
     fieldListJsonList[fieldListIndex].AsObject(m_fieldList[fieldListIndex].Jsonize());
   }
   payload.WithArray("fieldList", std::move(fieldListJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
